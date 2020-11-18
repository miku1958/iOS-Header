//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSNumber;

@interface PKFelicaGreenCarTicket : NSObject <NSSecureCoding>
{
    BOOL _refunded;
    NSData *_originStation;
    NSData *_destinationStation;
    NSNumber *_validityStartDate;
}

@property (readonly, copy, nonatomic) NSData *destinationStation; // @synthesize destinationStation=_destinationStation;
@property (readonly, copy, nonatomic) NSData *originStation; // @synthesize originStation=_originStation;
@property (readonly, nonatomic, getter=isRefunded) BOOL refunded; // @synthesize refunded=_refunded;
@property (readonly, copy, nonatomic) NSNumber *validityStartDate; // @synthesize validityStartDate=_validityStartDate;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

