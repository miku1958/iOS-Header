//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlay/CPTemplateDelegate-Protocol.h>

@class NSUUID;

@protocol CPEntityClientTemplateDelegate <CPTemplateDelegate>

@optional
- (void)handleDidSelectPointOfInterestWithIdentifier:(NSUUID *)arg1;
- (void)handleMapRegionDidChange:(CDStruct_2b0c6e0b)arg1;
@end
