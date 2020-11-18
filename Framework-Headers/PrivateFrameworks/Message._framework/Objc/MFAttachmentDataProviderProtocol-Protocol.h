//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/NSObject-Protocol.h>

@class MFAttachment, MFMessage, NSData;
@protocol MFDataConsumer;

@protocol MFAttachmentDataProviderProtocol <NSObject>
- (BOOL)fetchDataForAttachment:(MFAttachment *)arg1 withDataConsumer:(id<MFDataConsumer>)arg2 error:(id *)arg3;
- (NSData *)fetchLocalDataForAttachment:(MFAttachment *)arg1;
- (MFMessage *)messageForAttachment:(MFAttachment *)arg1;
@end

