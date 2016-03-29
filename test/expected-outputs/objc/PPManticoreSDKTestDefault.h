/**
 * PPManticoreSDKTestDefault.h
 *
 * DO NOT EDIT THIS FILE! IT IS AUTOMATICALLY GENERATED AND SHOULD NOT BE CHECKED IN.
 * Generated from: test/js-source/SDKTestDefault.js
 *
 * 
 */

#import "PayPalManticoreTypes.h"
#import "PPManticoreJSBackedObject.h"

@class PPManticoreSDKTest;
@class PPManticoreSDKTestDefault;
@class PPManticoreSDKTestDefaultSubclass;

/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
/**
 * 
 */
@interface PPManticoreSDKTestDefault : PPManticoreJSBackedObject
/**
 * It's 1
 */
@property (nonatomic,assign) int test;/**
 * It's true
 */
@property (nonatomic,assign) BOOL itsTrue;/**
 * It's false
 */
@property (nonatomic,assign) BOOL itsFalse;/**
 * Starts blank
 */
@property (nonatomic,assign) int blankInt;/**
 * Starts 1
 */
@property (nonatomic,assign) int intOne;/**
 * Starts blank
 */
@property (nonatomic,strong,nullable) NSDecimalNumber* blankDecimal;/**
 * Starts 100.01
 */
@property (nonatomic,strong,nullable) NSDecimalNumber* decimalHundredOhOne;/**
 * It's a null string.
 */
@property (nonatomic,strong,nullable) NSString* nullString;/**
 * It's now
 */
@property (nonatomic,strong,nullable) NSDate* now;/**
 * An array of a, b, c
 */
@property (nonatomic,strong,nullable) NSArray* stringArray;





/**
 * Test closure
 */
-(BOOL)isItTrue;




@end
