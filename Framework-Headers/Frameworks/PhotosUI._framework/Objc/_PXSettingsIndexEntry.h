//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString;

@interface _PXSettingsIndexEntry : NSObject
{
    _PXSettingsIndexEntry *_parentEntry;
    NSIndexPath *_indexPath;
    NSString *_sectionTitle;
    NSString *_rowTitle;
}

@property (readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property (weak, nonatomic) _PXSettingsIndexEntry *parentEntry; // @synthesize parentEntry=_parentEntry;
@property (readonly, nonatomic) NSString *rowTitle; // @synthesize rowTitle=_rowTitle;
@property (readonly, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *title;

+ (id)_cellForRowAtIndexPath:(id)arg1 inTableView:(id)arg2;
+ (id)_titleForRowAtIndexPath:(id)arg1 inTableView:(id)arg2;
- (void).cxx_destruct;
- (void)_revealInSettingsController:(id)arg1 drillIn:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_revealInTopOfSettingsController:(id)arg1 drillIn:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)initWithRowAtIndexPath:(id)arg1 inTableView:(id)arg2;
- (BOOL)matchesSearchString:(id)arg1;
- (void)revealInSettingsController:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end

