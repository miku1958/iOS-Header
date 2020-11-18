//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/CHStrokeProvider-Protocol.h>

@class NSArray, NSString, PKDrawing;
@protocol CHStrokeProviderVersion;

@interface PKStrokeProvider : NSObject <CHStrokeProvider>
{
    PKDrawing *_drawing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKDrawing *drawing; // @synthesize drawing=_drawing;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *orderedStrokes;
@property (readonly, strong) id<CHStrokeProviderVersion> strokeProviderVersion;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)compareOrderOfStroke:(id)arg1 toStroke:(id)arg2;
- (long long)compareOrderOfStrokeWithIdentifier:(id)arg1 toStrokeWithIdentifier:(id)arg2;
- (BOOL)enumerateChangesSinceVersion:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithDrawing:(id)arg1;
- (id)strokeForIdentifier:(id)arg1;

@end
