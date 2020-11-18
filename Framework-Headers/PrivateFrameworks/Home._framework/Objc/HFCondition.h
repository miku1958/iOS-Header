//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NAEquatable-Protocol.h>

@class NSPredicate, NSString;

@interface HFCondition : NSObject <NAEquatable>
{
    NSPredicate *_predicate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property (readonly) Class superclass;

+ (Class)homeKitRepresentationClass;
- (void).cxx_destruct;
- (id)initWithPredicate:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

