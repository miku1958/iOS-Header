//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

@class NSArray;

@interface TSPObjectContainer : TSPObject
{
    unsigned char _packageIdentifier;
    NSArray *_childObjects;
}

@property (readonly, nonatomic) NSArray *childObjects; // @synthesize childObjects=_childObjects;

+ (long long)objectIdentifierForPackageIdentifier:(unsigned char)arg1;
- (void).cxx_destruct;
- (unsigned char)componentRequiredPackageIdentifier;
- (unsigned int)delayedArchivingPriority;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 packageIdentifier:(unsigned char)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)packageLocator;
- (void)prepareForComponentWriteWithDelayedObjects:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (BOOL)shouldDelayArchiving;
- (long long)tsp_identifier;

@end

