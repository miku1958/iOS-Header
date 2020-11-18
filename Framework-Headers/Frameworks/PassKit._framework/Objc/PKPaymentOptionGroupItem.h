//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface PKPaymentOptionGroupItem : NSObject
{
    BOOL _selectable;
    BOOL _editable;
    BOOL _deletable;
    NSString *_groupType;
    id _referenceObject;
    NSString *_title;
    NSString *_detail;
}

@property (nonatomic, getter=isDeletable) BOOL deletable; // @synthesize deletable=_deletable;
@property (readonly, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property (nonatomic, getter=isEditable) BOOL editable; // @synthesize editable=_editable;
@property (readonly, nonatomic) NSString *groupType; // @synthesize groupType=_groupType;
@property (readonly, nonatomic) id referenceObject; // @synthesize referenceObject=_referenceObject;
@property (nonatomic, getter=isSelectable) BOOL selectable; // @synthesize selectable=_selectable;
@property (readonly, nonatomic) Class tableViewCellClass;
@property (readonly, nonatomic) NSString *title; // @synthesize title=_title;

+ (id)_singleLineGroupTypes;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithReferenceObject:(id)arg1 title:(id)arg2 detail:(id)arg3 groupType:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToOptionGroupItem:(id)arg1;

@end

