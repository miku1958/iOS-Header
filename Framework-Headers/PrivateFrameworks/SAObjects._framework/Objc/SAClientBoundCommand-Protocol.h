//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAAceCommand-Protocol.h>
#import <SAObjects/SAAceReferable-Protocol.h>

@class NSArray, NSString;

@protocol SAClientBoundCommand <SAAceCommand, SAAceReferable>

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *callbacks;

- (BOOL)requiresResponse;
@end

