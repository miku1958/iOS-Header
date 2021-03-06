//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ASCOfferMetadata, NSString;

__attribute__((visibility("hidden")))
@interface ASCAppOfferSavedState : NSObject
{
    NSString *_state;
    ASCOfferMetadata *_metadata;
    long long _flags;
}

@property (readonly, nonatomic) long long flags; // @synthesize flags=_flags;
@property (readonly, nonatomic) BOOL isActionable;
@property (readonly, nonatomic) BOOL isLoadingFullState;
@property (readonly, copy, nonatomic) ASCOfferMetadata *metadata; // @synthesize metadata=_metadata;
@property (readonly, copy, nonatomic) NSString *state; // @synthesize state=_state;

- (void).cxx_destruct;
- (id)initWithState:(id)arg1 metadata:(id)arg2 flags:(long long)arg3;

@end

