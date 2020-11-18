//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SiriRoutePickerAlertController, UIWindow;
@protocol SiriUIAudioRoutePickerControllerDelegate;

@interface SiriUIAudioRoutePickerController : NSObject
{
    id<SiriUIAudioRoutePickerControllerDelegate> _delegate;
    NSString *_audioCategory;
    UIWindow *_window;
    BOOL _hasRoutesToPick;
    BOOL _bluetoothIsPicked;
    SiriRoutePickerAlertController *_pickerAlertController;
}

@property (weak, nonatomic) id<SiriUIAudioRoutePickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) SiriRoutePickerAlertController *pickerAlertController; // @synthesize pickerAlertController=_pickerAlertController;

+ (id)_nameForRouteInfo:(id)arg1 isSelected:(BOOL *)arg2 isBluetooth:(BOOL *)arg3 isOverride:(BOOL *)arg4 audioRouteName:(id *)arg5;
- (void).cxx_destruct;
- (void)_dismissAlertController:(BOOL)arg1;
- (void)_fetchPickableRoutesForCategory:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_pickableRoutesChanged:(id)arg1;
- (void)_removeWindow;
- (void)_routeChanged:(id)arg1;
- (void)_selectRouteWithInfo:(id)arg1;
- (void)_showAlertControllerFromViewController:(id)arg1 animated:(BOOL)arg2;
- (BOOL)bluetoothIsPicked;
- (void)cancelPickerAnimated:(BOOL)arg1;
- (void)dealloc;
- (BOOL)hasRoutesToPick;
- (id)initWithCategory:(id)arg1 delegate:(id)arg2;
- (BOOL)isShowingPicker;
- (void)refreshRoutes;
- (void)showPickerFromViewController:(id)arg1 animated:(BOOL)arg2;

@end

