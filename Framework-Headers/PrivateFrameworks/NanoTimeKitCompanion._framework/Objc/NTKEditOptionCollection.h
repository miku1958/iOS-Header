//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NTKEditOptionCollection : NSObject
{
    long long _mode;
    NSString *_localizedName;
    NSArray *_options;
    unsigned long long _collectionType;
    NSString *_slot;
}

@property (nonatomic) unsigned long long collectionType; // @synthesize collectionType=_collectionType;
@property (copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property (nonatomic) long long mode; // @synthesize mode=_mode;
@property (copy, nonatomic) NSArray *options; // @synthesize options=_options;
@property (readonly, nonatomic) NSString *optionsDescription;
@property (copy, nonatomic) NSString *slot; // @synthesize slot=_slot;
@property (readonly, nonatomic) long long swatchStyle;

+ (id)editOptionCollectionWithEditMode:(long long)arg1 localizedName:(id)arg2 options:(id)arg3 collectionType:(unsigned long long)arg4;
- (void).cxx_destruct;
- (id)filteredCollectionForDevice:(id)arg1;
- (id)filteredCollectionWithObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)initWithEditMode:(long long)arg1 localizedName:(id)arg2 options:(id)arg3 collectionType:(unsigned long long)arg4;
- (id)initWithEditMode:(long long)arg1 localizedName:(id)arg2 options:(id)arg3 collectionType:(unsigned long long)arg4 slot:(id)arg5;
- (BOOL)isEqual:(id)arg1;

@end

