//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CKDMMCSPackageSignatureGenerator : NSObject
{
    BOOL _valid;
    void *_generator;
}

@property (nonatomic) void *generator; // @synthesize generator=_generator;
@property (nonatomic, getter=isValid) BOOL valid; // @synthesize valid=_valid;

- (char *)_finishGenerator;
- (id)dataByFinishingSignature;
- (void)dealloc;
- (id)init;
- (void)updateWithData:(id)arg1;

@end

