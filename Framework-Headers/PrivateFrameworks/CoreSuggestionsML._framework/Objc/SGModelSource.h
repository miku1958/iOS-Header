//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PMLSessionDescriptor;

@interface SGModelSource : NSObject
{
    PMLSessionDescriptor *_sessionDescriptor;
    Class _modelClass;
}

@property (strong, nonatomic) Class modelClass; // @synthesize modelClass=_modelClass;
@property (strong, nonatomic) PMLSessionDescriptor *sessionDescriptor; // @synthesize sessionDescriptor=_sessionDescriptor;

- (void).cxx_destruct;
- (id)initWithSessionDescriptor:(id)arg1 modelClass:(Class)arg2;

@end

