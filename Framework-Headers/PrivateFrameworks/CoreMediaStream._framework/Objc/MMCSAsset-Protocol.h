//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMediaStream/NSObject-Protocol.h>

@class NSData, NSDate, NSError, NSString;

@protocol MMCSAsset <NSObject>

@property (strong, nonatomic) NSString *MMCSAccessHeader;
@property (strong, nonatomic) NSDate *MMCSAccessHeaderTimeStamp;
@property (strong, nonatomic) NSError *MMCSError;
@property (strong, nonatomic) NSData *MMCSHash;
@property (nonatomic) unsigned int MMCSItemFlags;
@property (nonatomic) unsigned long long MMCSItemID;
@property (nonatomic) unsigned long long MMCSItemSize;
@property (strong, nonatomic) NSString *MMCSReceipt;
@property (strong, nonatomic) NSString *MMCSUTI;

- (NSString *)MMCSItemType;
- (int)MMCSOpenNewFileDescriptor;
@end

