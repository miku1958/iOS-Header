//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSFileManager, NSMapTable, NSMutableArray, NSString, NSUUID;

@interface WKWallpaperCollection : NSObject
{
    unsigned long long _source;
    NSBundle *__bundleForLocalizationResources;
    NSMutableArray *__wallpaperBundles;
    NSFileManager *__fileManager;
    NSMapTable *__wallpaperLookupTable;
}

@property (strong, nonatomic) NSBundle *_bundleForLocalizationResources; // @synthesize _bundleForLocalizationResources=__bundleForLocalizationResources;
@property (strong, nonatomic) NSFileManager *_fileManager; // @synthesize _fileManager=__fileManager;
@property (strong, nonatomic) NSMutableArray *_wallpaperBundles; // @synthesize _wallpaperBundles=__wallpaperBundles;
@property (strong, nonatomic) NSMapTable *_wallpaperLookupTable; // @synthesize _wallpaperLookupTable=__wallpaperLookupTable;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic, getter=isDynamicCollection) BOOL dynamicCollection;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) long long numberOfWallpapers;
@property (readonly, nonatomic) unsigned long long source; // @synthesize source=_source;

- (void).cxx_destruct;
- (BOOL)containsWallpaperRepresentingWithIdentifier:(id)arg1;
- (id)initWithSource:(unsigned long long)arg1;
- (id)wallpaperBundleAtIndex:(long long)arg1;
- (id)wallpaperRepresentingWithIdentifier:(id)arg1;

@end

