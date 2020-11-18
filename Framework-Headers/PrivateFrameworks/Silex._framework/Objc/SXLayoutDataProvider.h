//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, SXDocumentController;
@protocol OS_dispatch_semaphore;

@interface SXLayoutDataProvider : NSObject
{
    SXDocumentController *_documentController;
    NSMutableArray *_components;
    NSMutableArray *_componentIdentifiers;
    NSMutableDictionary *_componentLayouts;
    NSMutableSet *_componentsIdentifiersToRemove;
    NSMutableDictionary *_childLayoutDataProviders;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (strong, nonatomic) NSMutableDictionary *childLayoutDataProviders; // @synthesize childLayoutDataProviders=_childLayoutDataProviders;
@property (strong, nonatomic) NSMutableArray *componentIdentifiers; // @synthesize componentIdentifiers=_componentIdentifiers;
@property (strong, nonatomic) NSMutableDictionary *componentLayouts; // @synthesize componentLayouts=_componentLayouts;
@property (strong, nonatomic) NSMutableArray *components; // @synthesize components=_components;
@property (strong, nonatomic) NSMutableSet *componentsIdentifiersToRemove; // @synthesize componentsIdentifiersToRemove=_componentsIdentifiersToRemove;
@property (readonly, nonatomic) SXDocumentController *documentController; // @synthesize documentController=_documentController;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;

- (void).cxx_destruct;
- (id)allComponents;
- (id)componentAtIndex:(unsigned long long)arg1;
- (id)componentForIdentifier:(id)arg1;
- (id)componentLayoutForIdentifier:(id)arg1;
- (id)description;
- (unsigned long long)indexOfComponent:(id)arg1;
- (id)initWithComponents:(id)arg1 documentController:(id)arg2;
- (void)insertComponent:(id)arg1 afterComponent:(id)arg2;
- (void)insertComponent:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertComponentLayout:(id)arg1 withIdentifier:(id)arg2;
- (id)layoutDataProviderForContainerComponent:(id)arg1;
- (id)layoutDataProviderForPath:(id)arg1;
- (unsigned long long)numberOfComponents;
- (void)prepare;
- (void)removeComponent:(id)arg1;
- (void)removeComponentWithIdentifier:(id)arg1;
- (id)removedComponentsIdentifiers;

@end
