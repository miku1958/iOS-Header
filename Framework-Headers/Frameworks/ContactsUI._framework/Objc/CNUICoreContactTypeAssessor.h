//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNFuture;

@interface CNUICoreContactTypeAssessor : NSObject
{
    CNFuture *_familyInfoFuture;
}

@property (readonly, nonatomic) CNFuture *familyInfoFuture; // @synthesize familyInfoFuture=_familyInfoFuture;

+ (id)keysToFetch;
- (void).cxx_destruct;
- (long long)estiamtedTypeOfContact:(id)arg1;
- (id)init;
- (id)initWithFamilyInfo:(id)arg1;
- (id)initWithFamilyInfoFuture:(id)arg1;

@end

