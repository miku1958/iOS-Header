//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKPlaceCardActionItem, NSArray, NSDictionary;

@protocol MKPlaceActionManagerProtocol <NSObject>
- (NSArray *)createRowActionsWithStyle:(unsigned long long)arg1;
- (void)performAction:(MKPlaceCardActionItem *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(void))arg3;
@end
