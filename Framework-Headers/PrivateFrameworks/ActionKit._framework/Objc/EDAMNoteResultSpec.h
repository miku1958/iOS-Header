//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMNoteResultSpec : FATObject
{
    NSNumber *_includeContent;
    NSNumber *_includeResourcesData;
    NSNumber *_includeResourcesRecognition;
    NSNumber *_includeResourcesAlternateData;
    NSNumber *_includeSharedNotes;
    NSNumber *_includeNoteAppDataValues;
    NSNumber *_includeResourceAppDataValues;
    NSNumber *_includeAccountLimits;
}

@property (strong, nonatomic) NSNumber *includeAccountLimits; // @synthesize includeAccountLimits=_includeAccountLimits;
@property (strong, nonatomic) NSNumber *includeContent; // @synthesize includeContent=_includeContent;
@property (strong, nonatomic) NSNumber *includeNoteAppDataValues; // @synthesize includeNoteAppDataValues=_includeNoteAppDataValues;
@property (strong, nonatomic) NSNumber *includeResourceAppDataValues; // @synthesize includeResourceAppDataValues=_includeResourceAppDataValues;
@property (strong, nonatomic) NSNumber *includeResourcesAlternateData; // @synthesize includeResourcesAlternateData=_includeResourcesAlternateData;
@property (strong, nonatomic) NSNumber *includeResourcesData; // @synthesize includeResourcesData=_includeResourcesData;
@property (strong, nonatomic) NSNumber *includeResourcesRecognition; // @synthesize includeResourcesRecognition=_includeResourcesRecognition;
@property (strong, nonatomic) NSNumber *includeSharedNotes; // @synthesize includeSharedNotes=_includeSharedNotes;

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;

@end

