//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class CEKLightingControl;

@protocol CEKLightingControlDelegate <NSObject>
- (void)lightingControlDidChangeSelectedLightingType:(CEKLightingControl *)arg1;

@optional
- (void)lightingControl:(CEKLightingControl *)arg1 willChangeExpanded:(BOOL)arg2;
- (void)lightingControlDidChangeExpanded:(CEKLightingControl *)arg1;
@end
