//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PGPhotoChangeToGraphChangeConverter : NSObject
{
    NSMutableDictionary *_entityTranslatorByEntityName;
}

@property (strong, nonatomic) NSMutableDictionary *entityTranslatorByEntityName; // @synthesize entityTranslatorByEntityName=_entityTranslatorByEntityName;

- (void).cxx_destruct;
- (void)_registerTranslatorsWithPhotoLibrary:(id)arg1;
- (id)graphChangesWithPhotoChange:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;

@end

