//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class MPPropertySet, NSArray, NSString;

@interface MPModelRequest : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _allowsDeferringExpensiveProperties;
    NSString *_label;
    Class _itemClass;
    Class _sectionClass;
    MPPropertySet *_sectionProperties;
    MPPropertySet *_itemProperties;
    NSArray *_sectionSortDescriptors;
    NSArray *_itemSortDescriptors;
}

@property (nonatomic) BOOL allowsDeferringExpensiveProperties; // @synthesize allowsDeferringExpensiveProperties=_allowsDeferringExpensiveProperties;
@property (nonatomic) Class itemClass; // @synthesize itemClass=_itemClass;
@property (copy, nonatomic) MPPropertySet *itemProperties; // @synthesize itemProperties=_itemProperties;
@property (copy, nonatomic) NSArray *itemSortDescriptors; // @synthesize itemSortDescriptors=_itemSortDescriptors;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (nonatomic) Class sectionClass; // @synthesize sectionClass=_sectionClass;
@property (copy, nonatomic) MPPropertySet *sectionProperties; // @synthesize sectionProperties=_sectionProperties;
@property (copy, nonatomic) NSArray *sectionSortDescriptors; // @synthesize sectionSortDescriptors=_sectionSortDescriptors;

+ (id)sharedQueue;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;

@end
