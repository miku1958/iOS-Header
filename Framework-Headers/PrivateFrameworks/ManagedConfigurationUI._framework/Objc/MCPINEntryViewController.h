//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/DevicePINController.h>

#import <ManagedConfigurationUI/UIAdaptivePresentationControllerDelegate-Protocol.h>

@class NSString;
@protocol DevicePINControllerDelegate;

__attribute__((visibility("hidden")))
@interface MCPINEntryViewController : DevicePINController <UIAdaptivePresentationControllerDelegate>
{
    id<DevicePINControllerDelegate> _delegate;
    unsigned long long _style;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<DevicePINControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long style; // @synthesize style=_style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateStyle;
- (id)init;
- (void)presentationControllerDidAttemptToDismiss:(id)arg1;
- (id)stringsBundle;
- (id)stringsTable;
- (void)viewWillAppear:(BOOL)arg1;

@end
