//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailCore/ECLocalMessageActionBuilder-Protocol.h>

@class NSArray, NSURL;

@protocol ECTransferMessageActionBuilder <ECLocalMessageActionBuilder>

@property (strong, nonatomic) NSURL *destinationMailboxURL;
@property (strong, nonatomic) NSArray *itemsToCopy;
@property (strong, nonatomic) NSArray *itemsToDelete;
@property (strong, nonatomic) NSArray *itemsToDownload;
@property (strong, nonatomic) NSURL *sourceMailboxURL;
@property (nonatomic) long long transferType;

@end
