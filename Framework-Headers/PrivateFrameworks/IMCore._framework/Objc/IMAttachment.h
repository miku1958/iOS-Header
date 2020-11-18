//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface IMAttachment : NSObject
{
    NSString *_guid;
    NSString *_path;
    BOOL _isSticker;
    BOOL _isTransferComplete;
    NSDate *_createdDate;
}

- (void).cxx_destruct;
- (id)createdDate;
- (id)description;
- (id)fileTransfer;
- (id)guid;
- (id)initWithPath:(id)arg1 guid:(id)arg2;
- (id)initWithPath:(id)arg1 guid:(id)arg2 createdDate:(id)arg3 isSticker:(BOOL)arg4 isTransferComplete:(BOOL)arg5;
- (BOOL)isSticker;
- (BOOL)isTransferComplete;
- (id)path;

@end

