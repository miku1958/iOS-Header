//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHResourceRequest.h>

@class PHVideoRequestBehaviorSpec;

@interface PHVideoXPCRequest : PHResourceRequest
{
    PHVideoRequestBehaviorSpec *_behaviorSpec;
    struct CGSize _size;
}

@property (readonly, nonatomic) PHVideoRequestBehaviorSpec *behaviorSpec; // @synthesize behaviorSpec=_behaviorSpec;
@property (readonly, nonatomic) struct CGSize size; // @synthesize size=_size;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskIdentifier:(id)arg1 assetObjectID:(id)arg2 size:(struct CGSize)arg3 behavior:(id)arg4;

@end
