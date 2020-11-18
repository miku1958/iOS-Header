//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TNSheet.h>

@class NSString, TSTInfo;

__attribute__((visibility("hidden")))
@interface TNFormBasedSheet : TNSheet
{
    TSTInfo *_tableInfo;
    NSString *_importedTargetName;
    UUIDData_5fbc143e _tableUID;
}

@property (strong, nonatomic) NSString *importedTargetName; // @synthesize importedTargetName=_importedTargetName;
@property (readonly, nonatomic) TSTInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
@property (nonatomic) UUIDData_5fbc143e tableUID; // @synthesize tableUID=_tableUID;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearTableInfoCache;
- (double)contentScale;
- (id)initWithContext:(id)arg1 importedTargetName:(id)arg2;
- (BOOL)isForm;
- (void)loadFromUnarchiver:(id)arg1;
- (void)resolveImportedTargetNameInDocumentRoot:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (BOOL)shouldBeDisplayed;

@end

