/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GKGame, GKHostedViewController, NSMutableDictionary;

@interface GKRemoteViewController : _UIRemoteViewController <GKServiceViewControllerDelegate> {
    id _blockToPerformAfterViewDidAppear;
    BOOL _didSetRemoteGame;
    NSMutableDictionary *_dirtyProperties;
    GKGame *_game;
    BOOL _isInFormSheet;
    GKHostedViewController *_managingViewControllerWeak;
    BOOL _viewDidAppear;
}

@property(copy) id blockToPerformAfterViewDidAppear;
@property BOOL didSetRemoteGame;
@property(retain) NSMutableDictionary * dirtyProperties;
@property(retain) GKGame * game;
@property BOOL isInFormSheet;
@property GKHostedViewController * managingViewController;
@property(readonly) BOOL serviceNeedsCurrentGame;
@property(readonly) BOOL serviceNeedsLocalPlayer;
@property BOOL viewDidAppear;

+ (BOOL)shouldPropagateAppearanceCustomizations;

- (BOOL)_dismissSelfAfterGettingShouldCancel;
- (BOOL)_dismissSelfAfterGettingShouldFinish;
- (void)_performBlockAfterViewDidAppearIfNeeded;
- (void)_performSelectorAfterAppearingOrTimeOut:(SEL)arg1;
- (id)blockToPerformAfterViewDidAppear;
- (void)dealloc;
- (BOOL)didSetRemoteGame;
- (id)dirtyProperties;
- (id)game;
- (BOOL)isInFormSheet;
- (id)managingViewController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observedKeyPaths;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)readyToPresentInController:(id)arg1;
- (id)remoteProtocol;
- (void)remoteViewControllerIsCanceling;
- (void)remoteViewControllerIsFinishing;
- (BOOL)serviceNeedsCurrentGame;
- (BOOL)serviceNeedsLocalPlayer;
- (void)setBlockToPerformAfterViewDidAppear:(id)arg1;
- (void)setDidSetRemoteGame:(BOOL)arg1;
- (void)setDirtyProperties:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setIsInFormSheet:(BOOL)arg1;
- (void)setManagingViewController:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setViewDidAppear:(BOOL)arg1;
- (void)setupRemoteView;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)viewDidAppear;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)whitelistedClassNames;

@end