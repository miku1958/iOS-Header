//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>

@class TSPComponent, TSPObject;
@protocol TSPLazyReferenceDelegate;

@interface TSPLazyReference : NSObject <NSCopying>
{
    TSPObject *_strongObject;
    TSPObject *_weakObject;
    BOOL _isWeak;
    BOOL _allowUnknownObject;
    id<TSPLazyReferenceDelegate> _delegate;
    long long _identifier;
    TSPComponent *_component;
}

@property (weak, nonatomic) TSPComponent *component; // @synthesize component=_component;
@property (weak, nonatomic) id<TSPLazyReferenceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property (nonatomic) BOOL isWeak; // @synthesize isWeak=_isWeak;
@property (readonly, nonatomic) id object;
@property (readonly, nonatomic) id objectIfLoaded;
@property (strong, nonatomic) TSPObject *strongObject;
@property (readonly, nonatomic) TSPObject *weakObject;

+ (id)referenceForObject:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (BOOL)discardStrongObjectIfPossible;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDelegate:(id)arg1 identifier:(long long)arg2 isWeak:(BOOL)arg3 allowUnknownObject:(BOOL)arg4;
- (id)initWithTSPObject:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToLazyReference:(id)arg1;
- (BOOL)referencesObject:(id)arg1;
- (void)resetIdentifier;

@end

