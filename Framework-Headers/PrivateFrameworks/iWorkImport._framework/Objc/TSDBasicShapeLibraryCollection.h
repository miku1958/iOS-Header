//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSDShapeCollection-Protocol.h>

@class NSString, TSDBasicShapeLibrary;

__attribute__((visibility("hidden")))
@interface TSDBasicShapeLibraryCollection : NSObject <TSDShapeCollection>
{
    TSDBasicShapeLibrary *_basicShapeLibrary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long numberOfShapes;
@property (strong, nonatomic) TSDBasicShapeLibrary *p_basicShapeLibrary; // @synthesize p_basicShapeLibrary=_basicShapeLibrary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithBasicShapeLibrary:(id)arg1;
- (id)shapeAtIndex:(unsigned long long)arg1;

@end

