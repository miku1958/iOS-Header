//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;
@protocol BNPending;

@interface _BNPenderQueueEntry : NSObject
{
    id<BNPending> _pender;
    NSUUID *_entryIdentifier;
}

@property (readonly, nonatomic) NSUUID *entryIdentifier; // @synthesize entryIdentifier=_entryIdentifier;
@property (readonly, nonatomic) id<BNPending> pender; // @synthesize pender=_pender;

- (void).cxx_destruct;
- (id)initWithPender:(id)arg1;

@end
