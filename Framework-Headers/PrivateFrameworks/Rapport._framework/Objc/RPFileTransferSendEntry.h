//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RPFileTransferItem;

__attribute__((visibility("hidden")))
@interface RPFileTransferSendEntry : NSObject
{
    unsigned long long _fileID;
    RPFileTransferItem *_item;
}

@property (nonatomic) unsigned long long fileID; // @synthesize fileID=_fileID;
@property (strong, nonatomic) RPFileTransferItem *item; // @synthesize item=_item;

- (void).cxx_destruct;

@end

