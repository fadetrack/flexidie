/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "MPIncomingFaceTimeCallController.h"

@class UIView;

//@interface MPFaceTimeCallWaitingController : MPIncomingFaceTimeCallController
//{
//    int _backgroundType;
//    UIView *_callWaitingCenterView;
//}
@interface MPFaceTimeCallWaitingController (IOS7)
@property(nonatomic) int backgroundType; // @synthesize backgroundType=_backgroundType;
- (void)addCallWaitingButton:(BOOL)arg1;
- (void)sliderActionFromBar:(id)arg1 slidToProportion:(float)arg2;
- (void)bottomBarActionPerformed:(int)arg1 fromBar:(id)arg2;
- (void)endCurrentAndAnswerButtonTapped:(id)arg1;
- (void)performDeclineAction;
- (id)newBottomBar;
- (id)newTopBar;
- (void)decline;
- (void)accept;
- (BOOL)handleHeadsetButtonPressed:(BOOL)arg1;
- (void)_updateBackgroundViewForCurrentBackgroundType;
- (void)_updateBackgroundType;
- (BOOL)hasTranslucentBackground;
- (void)showBackgroundViewAnimated:(BOOL)arg1;
- (id)defaultBackgroundView;
- (void)viewDidLoad;
- (BOOL)shouldZoomOutBackgroundView;
- (void)updateImageFromPerson:(void *)arg1;
- (void)updateTopBarWithName:(id)arg1 image:(id)arg2;
- (void)_updateDisplayControllerForOrientation:(int)arg1;
- (id)additionalURLQueryParameters;
- (int)deactivationStyle;
- (BOOL)isShowingWallpaper;
- (BOOL)showsOnTopOfCurrentUI;
- (void)dealloc;
- (id)initWithChat:(id)arg1;

@end

