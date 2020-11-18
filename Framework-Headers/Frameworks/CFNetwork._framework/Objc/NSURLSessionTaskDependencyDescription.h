//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, __NSURLSessionTaskDependencyResourceIdentifier;

@interface NSURLSessionTaskDependencyDescription : NSObject
{
    NSString *_dependentURLPath;
    NSString *_dependentMimeType;
    NSString *_parentURLPath;
    NSString *_parentMimeType;
}

@property (strong, nonatomic) __NSURLSessionTaskDependencyResourceIdentifier *_dependent; // @dynamic _dependent;
@property (strong, nonatomic) __NSURLSessionTaskDependencyResourceIdentifier *_parent; // @dynamic _parent;
@property (readonly) NSString *dependentMimeType; // @synthesize dependentMimeType=_dependentMimeType;
@property (readonly) NSString *dependentURLPath; // @synthesize dependentURLPath=_dependentURLPath;
@property (nonatomic) BOOL exclusive; // @dynamic exclusive;
@property (readonly) NSString *parentMimeType; // @synthesize parentMimeType=_parentMimeType;
@property (readonly) NSString *parentURLPath; // @synthesize parentURLPath=_parentURLPath;
@property (nonatomic) float priority; // @dynamic priority;

+ (id)taskDependencyDescriptionWithMimeType:(id)arg1 parentMimeType:(id)arg2;
+ (id)taskDependencyDescriptionWithMimeType:(id)arg1 parentURLPath:(id)arg2;
+ (id)taskDependencyDescriptionWithParentMimeType:(id)arg1;
+ (id)taskDependencyDescriptionWithParentURLPath:(id)arg1;
+ (id)taskDependencyDescriptionWithURLPath:(id)arg1 parentMimeType:(id)arg2;
+ (id)taskDependencyDescriptionWithURLPath:(id)arg1 parentURLPath:(id)arg2;

@end

