//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/CKObjectValidating-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKPredicateValidatorInstance : NSObject <CKObjectValidating>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (BOOL)validate:(id)arg1 error:(id *)arg2;

@end

