//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class PKPassFaceView;

@protocol PKPassFaceDelegate <NSObject>
- (BOOL)passFaceBarcodeButtonEnabled;
- (void)passFaceBarcodeButtonPressed:(PKPassFaceView *)arg1;
- (BOOL)passFaceDeleteButtonEnabled;
- (void)passFaceDeleteButtonPressed:(PKPassFaceView *)arg1;
- (void)passFaceInfoButtonPressed:(PKPassFaceView *)arg1;
@end

