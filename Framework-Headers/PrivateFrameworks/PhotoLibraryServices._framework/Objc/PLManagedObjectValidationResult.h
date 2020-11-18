//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSManagedObject;
@protocol PLValidatedManagedObject;

@interface PLManagedObjectValidationResult : NSObject
{
    BOOL _status;
    NSManagedObject<PLValidatedManagedObject> *_validatedObject;
    NSArray *_errorMessages;
    NSArray *_infoMessages;
}

@property (strong, nonatomic) NSArray *errorMessages; // @synthesize errorMessages=_errorMessages;
@property (strong, nonatomic) NSArray *infoMessages; // @synthesize infoMessages=_infoMessages;
@property (nonatomic) BOOL status; // @synthesize status=_status;
@property (strong, nonatomic) NSManagedObject<PLValidatedManagedObject> *validatedObject; // @synthesize validatedObject=_validatedObject;

- (void).cxx_destruct;

@end
