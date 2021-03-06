//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonaKit/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSMutableSet, NSSet, NSString;

@interface PRLikeness : NSObject <NSSecureCoding>
{
    struct CGImage *_staticRepresentation;
    NSData *_staticRepresentationData;
    NSMutableSet *_dirtyProperties;
    BOOL _isCurrent;
    unsigned long long _type;
    unsigned long long _scope;
    NSData *_recipe;
    NSDate *_creationDate;
    NSString *_uniqueIdentifier;
    NSString *_externalIdentifier;
    unsigned long long _version;
    NSDate *_expirationDate;
    NSDate *_softExpirationDate;
    NSString *_ownerID;
    long long _source;
    NSDate *_insertionDate;
    struct CGRect _cropRectForTopLeftOrigin;
}

@property (strong, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property (readonly, nonatomic) struct CGRect cropRectForBottomLeftOrigin; // @dynamic cropRectForBottomLeftOrigin;
@property (nonatomic) struct CGRect cropRectForTopLeftOrigin; // @synthesize cropRectForTopLeftOrigin=_cropRectForTopLeftOrigin;
@property (strong, nonatomic) NSSet *dirtyProperties; // @synthesize dirtyProperties=_dirtyProperties;
@property (strong, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (copy, nonatomic) NSString *externalIdentifier; // @synthesize externalIdentifier=_externalIdentifier;
@property (strong, nonatomic) NSDate *insertionDate; // @synthesize insertionDate=_insertionDate;
@property (nonatomic, setter=setCurrent:) BOOL isCurrent; // @synthesize isCurrent=_isCurrent;
@property (readonly, nonatomic) BOOL isDirty;
@property (strong, nonatomic) NSString *ownerID; // @synthesize ownerID=_ownerID;
@property (copy, nonatomic) NSData *recipe; // @synthesize recipe=_recipe;
@property (nonatomic) unsigned long long scope; // @synthesize scope=_scope;
@property (readonly, nonatomic) NSString *scopeDescription;
@property (strong, nonatomic) NSDate *softExpirationDate; // @synthesize softExpirationDate=_softExpirationDate;
@property (nonatomic) long long source; // @synthesize source=_source;
@property (strong, nonatomic) NSData *staticRepresentationData;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;
@property (readonly, nonatomic) NSString *typeDescription;
@property (readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (nonatomic) unsigned long long version; // @synthesize version=_version;

+ (id)_dateFormatter;
+ (struct CGRect)_flippedRectForRect:(struct CGRect)arg1 relativeToImage:(struct CGImage *)arg2;
+ (id)_photoWithScope:(unsigned long long)arg1 image:(struct CGImage *)arg2 cropRectForTopLeftOrigin:(struct CGRect)arg3;
+ (BOOL)automaticallyNotifiesObserversOfCropRectForTopLeftOrigin;
+ (id)descriptionForScope:(unsigned long long)arg1;
+ (id)diddlySquatLikeness;
+ (id)likenessWithPropagatedData:(id)arg1;
+ (id)monogramWithRecipe:(id)arg1 staticRepresentation:(struct CGImage *)arg2;
+ (id)monogramWithScope:(unsigned long long)arg1 recipe:(id)arg2 staticRepresentation:(struct CGImage *)arg3;
+ (id)photoWithImage:(struct CGImage *)arg1;
+ (id)photoWithImage:(struct CGImage *)arg1 cropRect:(struct CGRect)arg2;
+ (id)photoWithImage:(struct CGImage *)arg1 cropRectForBottomLeftOrigin:(struct CGRect)arg2;
+ (id)photoWithImage:(struct CGImage *)arg1 cropRectForTopLeftOrigin:(struct CGRect)arg2;
+ (id)photoWithScope:(unsigned long long)arg1 image:(struct CGImage *)arg2;
+ (unsigned long long)scopeFromDescription:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1;
- (void)clearDirtyProperties;
- (struct CGRect)cropRect;
- (id)dataForPropagation;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isDiddlySquat;
- (void)setCropRect:(struct CGRect)arg1;
- (void)setStaticRepresentation:(struct CGImage *)arg1;
- (struct CGImage *)staticRepresentation;

@end

