/*
 *  Licensed Materials - Property of IBM
 *  5725-I43 (C) Copyright IBM Corp. 2011, 2013. All Rights Reserved.
 *  US Government Users Restricted Rights - Use, duplication or
 *  disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 */

#import <Foundation/Foundation.h>

/**
 Contains JSONStore query operations.
 @since IBM Worklight V6.2.0
 */
@interface JSONStoreQuery : NSObject

/**
 Special case when looking for _id values
 @since IBM Worklight V6.2.0
 @private
 */
@property (nonatomic, retain) NSMutableArray* _ids;

/**
 Array with less than criteria (e.g. [{age: 20}]).
 @since IBM Worklight V6.2.0
 @private
 */
@property (nonatomic, retain) NSMutableArray* _lessThan;

/**
 Array with less than or equal than criteria (e.g. [{age: 20}]).
 @since IBM Worklight V6.2.0
 @private
 */
@property (nonatomic, retain) NSMutableArray* _lessOrEqualThan;

/**
 Array with greater than criteria (e.g. [{age: 20}]).
 @since IBM Worklight V6.2.0
 @private
 */
@property (nonatomic, retain) NSMutableArray* _greaterThan;

/**
 Array with greater than or equal than criteria (e.g. [{age: 20}]).
 @since IBM Worklight V6.2.0
 @private
 */
@property (nonatomic, retain) NSMutableArray* _greaterOrEqualThan;

/**
 Array with like criteria (e.g. [{name: @"carlos"}]), matches right and left of the input.
 @since IBM Worklight V6.2.0
 @private
 */
@property (nonatomic, retain) NSMutableArray* _like;

/**
 Array with not like criteria (e.g. [{name: @"carlos"}]), matches right and left of the input.
 @since IBM Worklight V6.2.0
 @private
 */
@property (nonatomic, retain) NSMutableArray* _notLike;

/**
 Array with like criteria (e.g. [{name: @"carlos"}]), matches only right of the input.
 @since IBM Worklight V6.2.0
 @private
 */
@property (nonatomic, retain) NSMutableArray* _rightLike;

/**
 Array with not like criteria (e.g. [{name: @"carlos"}]), matches only right of the input.
 @since IBM Worklight V6.2.0
 @private
 */
@property (nonatomic, retain) NSMutableArray* _notRightLike;

/**
 Array with like criteria (e.g. [{name: @"carlos"}]), matches only left of the input.
 @since IBM Worklight V6.2.0
 @private
 */
@property (nonatomic, retain) NSMutableArray* _leftLike;

/**
 Array with not like criteria (e.g. [{name: @"carlos"}]), matches only left of the input.
 @since IBM Worklight V6.2.0
 @private
 */
@property (nonatomic, retain) NSMutableArray* _notLeftLike;

/**
 Array with equal criteria (e.g. [{name: @"carlos"}]).
 @since IBM Worklight V6.2.0
 @private
 */
@property (nonatomic, retain) NSMutableArray* _equal;

/**
 Array with not equal criteria (e.g. [{name: @"carlos"}]).
 @since IBM Worklight V6.2.0
 @private
 */
@property (nonatomic, retain) NSMutableArray* _notEqual;

/**
 Array with in criteria (e.g. [ [@"carlos", @"dgonz", @"mike"] ]).
 @since IBM Worklight V6.2.0
 @private
 */
@property (nonatomic, retain) NSMutableArray* _in;

/**
 Array with not in criteria (e.g. [ [@"carlos", @"dgonz", @"mike"] ]).
 @since IBM Worklight V6.2.0
 @private
 */
@property (nonatomic, retain) NSMutableArray* _notIn;

/**
 Array with between criteria (e.g. [ [50,100] ]).
 @since IBM Worklight V6.2.0
 @private
 */
@property (nonatomic, retain) NSMutableArray* _between;

/**
 Array with not between criteria (e.g. [ [50,100] ]).
 @since IBM Worklight V6.2.0
 @private
 */
@property (nonatomic, retain) NSMutableArray* _notBetween;

/**
 Set less than criteria.
 @param searchField Search field
 @param number Number
 @since IBM Worklight V6.2.0
 */
-(void) searchField:(NSString*) searchField
           lessThan:(NSNumber*) number;

/**
 Set less than or equal to criteria.
 @param searchField Search field
 @param number Number
 @since IBM Worklight V6.2.0
 */
-(void) searchField:(NSString*) searchField
    lessOrEqualThan:(NSNumber*) number;

/**
 Set greater than criteria.
 @param searchField Search field
 @param number Number
 @since IBM Worklight V6.2.0
 */
-(void) searchField:(NSString*) searchField
        greaterThan:(NSNumber*) number;

/**
 Set greater than or equal to criteria.
 @param searchField Search field
 @param number Number
 @since IBM Worklight V6.2.0
 */
-(void) searchField:(NSString*) searchField
 greaterOrEqualThan:(NSNumber*) number;

/**
 Set like criteria.
 @param searchField Search field
 @param string String
 @since IBM Worklight V6.2.0
 */
-(void) searchField:(NSString*) searchField
               like:(NSString*) string;

/**
 Set not like criteria.
 @param searchField Search field
 @param string String
 @since IBM Worklight V6.2.0
 */
-(void) searchField:(NSString*) searchField
            notLike:(NSString*) string;

/**
 Set like criteria, matches only left of the input.
 @param searchField Search field
 @param string String
 @since IBM Worklight V6.2.0
 */
-(void) searchField:(NSString*) searchField
           leftLike:(NSString*) string;

/**
 Set not like criteria, matches only left of the input.
 @param searchField Search field
 @param string String
 @since IBM Worklight V6.2.0
 */
-(void) searchField:(NSString*) searchField
        notLeftLike:(NSString*) string;

/**
 Set like criteria, matches only right of the input.
 @param searchField Search field
 @param string String
 @since IBM Worklight V6.2.0
 */
-(void) searchField:(NSString*) searchField
          rightLike:(NSString*) string;

/**
 Set not like criteria, matches only right of the input.
 @param searchField Search field
 @param string String
 @since IBM Worklight V6.2.0
 */
-(void) searchField:(NSString*) searchField
       notRightLike:(NSString*) string;

/**
 Set equal criteria.
 @param searchField Search field
 @param string String
 @since IBM Worklight V6.2.0
 */
-(void) searchField:(NSString*) searchField
              equal:(NSString*) string;

/**
 Set not equal criteria.
 @param searchField Search field
 @param string String
 @since IBM Worklight V6.2.0
 */
-(void) searchField:(NSString*) searchField
           notEqual:(NSString*) string;

/**
 Set in criteria.
 @param searchField Search field
 @param values Array of strings
 @since IBM Worklight V6.2.0
 */
-(void) searchField:(NSString*) searchField
           inValues:(NSArray*) values;

/**
 Set not in criteria.
 @param searchField Search field
 @param values Array of strings
 @since IBM Worklight V6.2.0
 */
-(void) searchField:(NSString*) searchField
        notInValues:(NSArray*) values;

/**
 Set between criteria.
 @param searchField Search field
 @param number1 First number in the range
 @param number2 Last number in the range
 @since IBM Worklight V6.2.0
 */
-(void) searchField:(NSString*) searchField
            between:(NSNumber*) number1
                and:(NSNumber*) number2;

/**
 Set not between criteria.
 @param searchField Search field
 @param number1 First number in the range
 @param number2 Last number in the range
 @since IBM Worklight V6.2.0
 */
-(void) searchField:(NSString*) searchField
         notBetween:(NSNumber*) number1
                and:(NSNumber*) number2;
@end
