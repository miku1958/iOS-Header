//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSDShapeCollection-Protocol.h>

@class NSString, TSDUserDefinedShapeLibrary;

__attribute__((visibility("hidden")))
@interface TSDUserDefinedShapeLibraryCollection : NSObject <TSDShapeCollection>
{
    TSDUserDefinedShapeLibrary *_userDefinedShapeLibrary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long numberOfShapes;
@property (strong, nonatomic) TSDUserDefinedShapeLibrary *p_userDefinedShapeLibrary; // @synthesize p_userDefinedShapeLibrary=_userDefinedShapeLibrary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)hasUserDefinedShapes;
- (id)initWithUserDefinedShapeLibrary:(id)arg1;
- (id)shapeAtIndex:(unsigned long long)arg1;

@end

