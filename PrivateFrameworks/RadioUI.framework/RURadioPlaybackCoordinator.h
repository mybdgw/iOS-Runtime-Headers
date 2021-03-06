/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class MPAVRoute, MPAVRoutingController, MPUReportingPlaybackObserver, MPUserNotification, NSDate, NSObject<OS_dispatch_source>, NSString, RUPlaybackTimeoutInfoController, RURadioAVPlayer, RadioStation;

@interface RURadioPlaybackCoordinator : NSObject <MPAVRoutingControllerDelegate> {
    RadioStation *_currentStation;
    BOOL _deviceIsDocked;
    BOOL _deviceIsLocked;
    BOOL _didPresentNotificationForCurrentItem;
    int _lockStateNotifyToken;
    BOOL _lockStateNotifyTokenIsValid;
    void *_mediaRemoteCommandObserver;
    NSObject<OS_dispatch_source> *_pauseTimeoutTimerSource;
    MPAVRoute *_pickedRoute;
    BOOL _playbackIsPaused;
    RadioStation *_playbackNotificationStation;
    NSDate *_playbackTimeoutBeginDate;
    double _playbackTimeoutDuration;
    RUPlaybackTimeoutInfoController *_playbackTimeoutInfoController;
    MPUserNotification *_playbackTimeoutNotification;
    BOOL _playbackTimeoutNotificationDidExpire;
    NSObject<OS_dispatch_source> *_playbackTimeoutNotificationExpirationTimerSource;
    RURadioAVPlayer *_player;
    NSObject<OS_dispatch_source> *_presentPlaybackTimeoutTimerSource;
    MPUReportingPlaybackObserver *_reportingPlaybackObserver;
    MPAVRoutingController *_routingController;
    BOOL _wasUsingBackgroundNetwork;
}

@property(retain) RadioStation * currentStation;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) RURadioAVPlayer * player;
@property(retain) MPUReportingPlaybackObserver * reportingPlaybackObserver;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_cancelPauseTimeoutTimer;
- (void)_cancelPlaybackTimeoutNotification;
- (void)_cancelPlaybackTimeoutNotificationExpirationTimer;
- (void)_cancelPresentPlaybackTimeoutTimer;
- (void)_dismissExpiredPlaybackTimeoutNotificationForced:(BOOL)arg1;
- (void)_effectiveVolumeDidChangeNotification:(id)arg1;
- (void)_fullMuteDidChangeNotification:(id)arg1;
- (BOOL)_isPauseTimeoutActive;
- (BOOL)_isRadioRelevantItem:(id)arg1;
- (void)_itemDurationDidBecomeAvailableNotification:(id)arg1;
- (void)_itemIsBannedDidChangeNotification:(id)arg1;
- (void)_itemIsInWishListDidChangeNotification:(id)arg1;
- (void)_itemIsLikedDidChangeNotification:(id)arg1;
- (void)_itemWillChangeNotification:(id)arg1;
- (void)_playbackContentsDidChangeNotification:(id)arg1;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)_presentPlaybackTimeoutNotificationForCurrentItemIfNeeded;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_receivedUserNotificationResponseForUserNotification:(struct __CFUserNotification { }*)arg1 withResponseFlags:(unsigned long)arg2;
- (void)_resetPlaybackTimeoutInformation;
- (void)_schedulePlaybackTimeoutNotificationExpirationTimerIfNeeded;
- (void)_setupPlayerWithRadioPlaybackContext:(id)arg1;
- (void)_updatePlaybackTimerForDeviceStateChange;
- (id)currentStation;
- (void)dealloc;
- (id)init;
- (id)initWithPlayer:(id)arg1;
- (id)player;
- (id)reportingPlaybackObserver;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)setCurrentStation:(id)arg1;
- (void)setReportingPlaybackObserver:(id)arg1;
- (void)setupPlaybackQueueWithPlaybackContext:(id)arg1 completionHandler:(id)arg2;

@end
