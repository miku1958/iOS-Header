//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKPredicateValidatorInstance.h>

@protocol CKObjectValidating;

__attribute__((visibility("hidden")))
@interface CKKeyPathExpressionValidator : CKPredicateValidatorInstance
{
    id<CKObjectValidating> _validator;
}

@property (strong, nonatomic) id<CKObjectValidating> validator; // @synthesize validator=_validator;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)initWithValidator:(id)arg1;
- (BOOL)validate:(id)arg1 error:(id *)arg2;

@end
