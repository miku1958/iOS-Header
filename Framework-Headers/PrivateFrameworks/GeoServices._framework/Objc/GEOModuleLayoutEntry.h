//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOPDModuleLayoutEntry, NSArray, NSString;

@interface GEOModuleLayoutEntry : NSObject
{
    GEOPDModuleLayoutEntry *_moduleLayoutEntry;
}

@property (readonly, nonatomic) NSString *debugName;
@property (readonly, nonatomic) NSArray *modules;

+ (id)moduleLayoutEntryFromArray:(id)arg1;
- (void).cxx_destruct;
- (id)initWithModuleLayoutEntry:(id)arg1;

@end
