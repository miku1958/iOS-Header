//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NIExportedObjectForwarder : NSObject
{
    id _exportedObject;
}

@property (weak) id exportedObject; // @synthesize exportedObject=_exportedObject;

- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithExportedObject:(id)arg1;

@end

