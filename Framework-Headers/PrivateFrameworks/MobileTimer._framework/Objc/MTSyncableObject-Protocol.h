//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/NSObject-Protocol.h>

@class NSDate, NSString;
@protocol MTSyncableObject;

@protocol MTSyncableObject <NSObject>

@property (readonly, nonatomic) NSDate *syncDate;
@property (readonly, nonatomic) NSString *syncIdentifier;


@optional
- (BOOL)conflicts:(id<MTSyncableObject>)arg1;
- (id<MTSyncableObject>)merge:(id<MTSyncableObject>)arg1;
- (id<MTSyncableObject>)preferred:(id<MTSyncableObject>)arg1;
@end

