//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CLSRelation : NSObject
{
    BOOL _faultable;
    Class _fromEntity;
    NSString *_fromKey;
    Class _toEntity;
    NSString *_toKey;
}

@property (readonly, nonatomic, getter=isFaultable) BOOL faultable; // @synthesize faultable=_faultable;
@property (readonly, nonatomic) Class fromEntity; // @synthesize fromEntity=_fromEntity;
@property (readonly, nonatomic) NSString *fromKey; // @synthesize fromKey=_fromKey;
@property (readonly, nonatomic) Class toEntity; // @synthesize toEntity=_toEntity;
@property (readonly, nonatomic) NSString *toKey; // @synthesize toKey=_toKey;

- (void).cxx_destruct;
- (id)description;
- (id)initWithFromEntity:(Class)arg1 toEntity:(Class)arg2 onFromKey:(id)arg3 toKey:(id)arg4 faultable:(BOOL)arg5;
- (BOOL)isEquivalentToRelation:(id)arg1;
- (BOOL)isInverseOfRelation:(id)arg1;

@end

