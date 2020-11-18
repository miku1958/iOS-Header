//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailCore/ECTransferMessageActionItemBuilder-Protocol.h>
#import <EmailCore/NSCopying-Protocol.h>

@class NSString;
@protocol ECMessage;

@interface ECTransferMessageActionItem : NSObject <ECTransferMessageActionItemBuilder, NSCopying>
{
    NSString *_sourceRemoteID;
    id<ECMessage> _sourceMessage;
    id<ECMessage> _destinationMessage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) id<ECMessage> destinationMessage; // @synthesize destinationMessage=_destinationMessage;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<ECMessage> sourceMessage; // @synthesize sourceMessage=_sourceMessage;
@property (copy, nonatomic) NSString *sourceRemoteID; // @synthesize sourceRemoteID=_sourceRemoteID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithBuilder:(CDUnknownBlockType)arg1;

@end
