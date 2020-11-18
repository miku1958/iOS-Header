//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class MPModelKind, MPPropertySet, NSArray, NSString;

@interface MPModelRequest : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _shouldIncludeContentItemID;
    NSString *_label;
    MPModelKind *_sectionKind;
    MPPropertySet *_sectionProperties;
    NSArray *_sectionSortDescriptors;
    MPModelKind *_itemKind;
    MPPropertySet *_itemProperties;
    NSArray *_itemSortDescriptors;
}

@property (strong, nonatomic) Class itemClass;
@property (strong, nonatomic) MPModelKind *itemKind; // @synthesize itemKind=_itemKind;
@property (copy, nonatomic) MPPropertySet *itemProperties; // @synthesize itemProperties=_itemProperties;
@property (copy, nonatomic) NSArray *itemSortDescriptors; // @synthesize itemSortDescriptors=_itemSortDescriptors;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (strong, nonatomic) Class sectionClass;
@property (strong, nonatomic) MPModelKind *sectionKind; // @synthesize sectionKind=_sectionKind;
@property (copy, nonatomic) MPPropertySet *sectionProperties; // @synthesize sectionProperties=_sectionProperties;
@property (copy, nonatomic) NSArray *sectionSortDescriptors; // @synthesize sectionSortDescriptors=_sectionSortDescriptors;
@property (nonatomic) BOOL shouldIncludeContentItemID; // @synthesize shouldIncludeContentItemID=_shouldIncludeContentItemID;

+ (id)sharedQueue;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_kindForClass:(Class)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;

@end
