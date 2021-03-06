/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class <GKGameCenterControllerDelegate>, GKHostedGameCenterViewController, GKRemoteGameCenterViewController, NSMutableDictionary, NSString, UIAlertController;

@interface GKGameCenterViewController : UINavigationController {
    UIAlertController *_alertController;
    <GKGameCenterControllerDelegate> *_gameCenterDelegateWeak;
    GKHostedGameCenterViewController *_privateViewController;
    GKRemoteGameCenterViewController *_remoteViewController;
    NSMutableDictionary *_volatileProperties;
}

@property(retain) UIAlertController * alertController;
@property <GKGameCenterControllerDelegate> * gameCenterDelegate;
@property(retain) NSString * leaderboardCategory;
@property(retain) NSString * leaderboardIdentifier;
@property int leaderboardTimeScope;
@property(retain) GKHostedGameCenterViewController * privateViewController;
@property(retain) GKRemoteGameCenterViewController * remoteViewController;
@property int viewState;
@property(retain) NSMutableDictionary * volatileProperties;

+ (BOOL)_preventsAppearanceProxyCustomization;
+ (BOOL)accessInstanceVariablesDirectly;

- (BOOL)_canSetPropertiesOnRemoteViewController;
- (void)_flushVolatileProperties;
- (BOOL)_remoteControllerIsPresented;
- (void)_setupChildViewController;
- (id)alertController;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)dealloc;
- (id)gameCenterDelegate;
- (id)init;
- (id)leaderboardCategory;
- (id)leaderboardIdentifier;
- (int)leaderboardTimeScope;
- (void)loadView;
- (void)notifyDelegateOnWillFinish;
- (id)privateViewController;
- (id)remoteViewController;
- (void)setAlertController:(id)arg1;
- (void)setGameCenterDelegate:(id)arg1;
- (void)setLeaderboardCategory:(id)arg1;
- (void)setLeaderboardIdentifier:(id)arg1;
- (void)setLeaderboardTimeScope:(int)arg1;
- (void)setPrivateViewController:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setViewState:(int)arg1;
- (void)setVolatileProperties:(id)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (id)valueForKey:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (int)viewState;
- (void)viewWillAppear:(BOOL)arg1;
- (id)volatileProperties;

@end
