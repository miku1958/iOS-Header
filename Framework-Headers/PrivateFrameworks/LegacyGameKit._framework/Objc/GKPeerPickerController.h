//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKPeerPickerViewController;
@protocol GKPeerPickerControllerDelegate;

@interface GKPeerPickerController : NSObject
{
    id _picker;
}

@property (nonatomic) unsigned long long connectionTypesMask;
@property (weak, nonatomic) id<GKPeerPickerControllerDelegate> delegate;
@property (readonly, nonatomic) GKPeerPickerViewController *pickerViewController; // @dynamic pickerViewController;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;

+ (void)initialize;
- (void)_createPicker;
- (void)dealloc;
- (void)dismiss;
- (id)init;
- (void)peerPickerViewController:(id)arg1 didConnectPeer:(id)arg2 toSession:(id)arg3;
- (void)peerPickerViewController:(id)arg1 didSelectConnectionType:(unsigned long long)arg2;
- (id)peerPickerViewController:(id)arg1 sessionForConnectionType:(unsigned long long)arg2;
- (void)peerPickerViewControllerDidCancel:(id)arg1;
- (void)show;

@end
