//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaServices/NSSecureCoding-Protocol.h>

@interface MSVArtworkServiceRequest : NSObject <NSSecureCoding>
{
}

@property (readonly, nonatomic) Class operationClass;
@property (readonly, nonatomic) long long operationPriority;

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
