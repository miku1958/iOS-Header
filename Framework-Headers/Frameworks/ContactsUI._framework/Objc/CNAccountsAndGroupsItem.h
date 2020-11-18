//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNAccountsAndGroupsItem : NSObject
{
    BOOL _selected;
    BOOL _bypassIfUnique;
    BOOL _soloSelect;
    NSString *_name;
    CDUnknownBlockType _nameProvider;
    NSString *_identifier;
    long long _containerType;
    NSArray *_childItems;
    CNAccountsAndGroupsItem *_parentItem;
    long long _type;
}

@property (nonatomic) BOOL bypassIfUnique; // @synthesize bypassIfUnique=_bypassIfUnique;
@property (strong, nonatomic) NSArray *childItems; // @synthesize childItems=_childItems;
@property (nonatomic) long long containerType; // @synthesize containerType=_containerType;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, copy, nonatomic) CDUnknownBlockType nameProvider; // @synthesize nameProvider=_nameProvider;
@property (weak, nonatomic) CNAccountsAndGroupsItem *parentItem; // @synthesize parentItem=_parentItem;
@property (nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property (nonatomic) BOOL soloSelect; // @synthesize soloSelect=_soloSelect;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;

- (void).cxx_destruct;
- (void)_setSelected:(BOOL)arg1 affectingChildren:(BOOL)arg2;
- (id)arrayForDisplay:(BOOL)arg1;
- (id)initWithType:(long long)arg1 nameProvider:(CDUnknownBlockType)arg2;
- (long long)localizedCompare:(id)arg1;

@end
