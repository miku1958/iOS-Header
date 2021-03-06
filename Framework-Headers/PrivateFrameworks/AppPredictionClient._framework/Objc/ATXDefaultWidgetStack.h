//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXDefaultHomeScreenItem-Protocol.h>
#import <AppPredictionClient/NSCopying-Protocol.h>
#import <AppPredictionClient/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface ATXDefaultWidgetStack : NSObject <NSSecureCoding, NSCopying, ATXDefaultHomeScreenItem>
{
    NSArray *_smallDefaultStack;
    NSArray *_mediumDefaultStack;
    NSArray *_largeDefaultStack;
    unsigned long long _suggestedSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *largeDefaultStack; // @synthesize largeDefaultStack=_largeDefaultStack;
@property (copy, nonatomic) NSArray *mediumDefaultStack; // @synthesize mediumDefaultStack=_mediumDefaultStack;
@property (copy, nonatomic) NSArray *smallDefaultStack; // @synthesize smallDefaultStack=_smallDefaultStack;
@property (nonatomic) unsigned long long suggestedSize; // @synthesize suggestedSize=_suggestedSize;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_JSONCompatible:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

