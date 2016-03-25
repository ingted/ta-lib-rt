/* TA-LIB Copyright (c) 1999-2008, Mario Fortier
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or
 * without modification, are permitted provided that the following
 * conditions are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the
 *   distribution.
 *
 * - Neither name of author nor the names of its contributors
 *   may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * REGENTS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/* List of contributors:
 *
 *  Initial  Name/description
 *  -------------------------------------------------------------------
 *  MF       Mario Fortier
 *  AM       Adrian Michel
 *
 * Change history:
 *
 *  MMDDYY BY   Description
 *  -------------------------------------------------------------------
 *  010802 MF   Template creation.
 *  052603 MF   Adapt code to compile with .NET Managed C++
 *  082303 MF   Fix #792298. Remove rounding. Bug reported by AM.
 */

/**** START GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
/* All code within this section is automatically
 * generated by gen_code. Any modification will be lost
 * next time gen_code is run.
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */    #include "TA-Lib-Core.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (RetCode::InternalError)
/* Generated */    namespace TicTacTec { namespace TA { namespace Library {
/* Generated */ #elif defined( _JAVA )
/* Generated */    #include "ta_defs.h"
/* Generated */    #include "ta_java_defs.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (RetCode.InternalError)
/* Generated */ #else
/* Generated */    #include <string.h>
/* Generated */    #include <math.h>
/* Generated */    #include "ta_func.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_UTILITY_H
/* Generated */    #include "ta_utility.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_MEMORY_H
/* Generated */    #include "ta_memory.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #define TA_PREFIX(x) TA_##x
/* Generated */ #define INPUT_TYPE   double
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::AdxrLookback( int           optInTimePeriod )  /* From 2 to 100000 */
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int adxrLookback( int           optInTimePeriod )  /* From 2 to 100000 */
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_ADXR_Lookback( int           optInTimePeriod )  /* From 2 to 100000 */
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */    /* min/max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 14;
/* Generated */    else if( ((int)optInTimePeriod < 2) || ((int)optInTimePeriod > 100000) )
/* Generated */       return -1;
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/

   /* insert lookback code here. */
   if( optInTimePeriod > 1 )
      return optInTimePeriod + LOOKBACK_CALL(ADX)( optInTimePeriod) - 1;
   else
      return 3;
}

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_ADXR - Average Directional Movement Index Rating
 * 
 * Input  = High, Low, Close
 * Output = double
 * 
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 * 
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::Adxr( int    startIdx,
/* Generated */                                      int    endIdx,
/* Generated */                                      SubArray<double>^ inHigh,
/* Generated */                                      SubArray<double>^ inLow,
/* Generated */                                      SubArray<double>^ inClose,
/* Generated */                                      int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                                      [Out]int%    outBegIdx,
/* Generated */                                      [Out]int%    outNBElement,
/* Generated */                                      SubArray<double>^  outReal )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Adxr( int    startIdx,
/* Generated */                                      int    endIdx,
/* Generated */                                      cli::array<double>^ inHigh,
/* Generated */                                      cli::array<double>^ inLow,
/* Generated */                                      cli::array<double>^ inClose,
/* Generated */                                      int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                                      [Out]int%    outBegIdx,
/* Generated */                                      [Out]int%    outNBElement,
/* Generated */                                      cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode adxr( int    startIdx,
/* Generated */                      int    endIdx,
/* Generated */                      double       inHigh[],
/* Generated */                      double       inLow[],
/* Generated */                      double       inClose[],
/* Generated */                      int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                      MInteger     outBegIdx,
/* Generated */                      MInteger     outNBElement,
/* Generated */                      double        outReal[] )
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_ADXR( int    startIdx,
/* Generated */                                int    endIdx,
/* Generated */                                           const double inHigh[],
/* Generated */                                           const double inLow[],
/* Generated */                                           const double inClose[],
/* Generated */                                           int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                                           int          *outBegIdx,
/* Generated */                                           int          *outNBElement,
/* Generated */                                           double        outReal[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
	/* insert local variable here */
   ARRAY_REF( adx );
   int adxrLookback, i, j, outIdx, nbElement;
   ENUM_DECLARATION(RetCode) retCode;

/**** START GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    /* Validate the requested output range. */
/* Generated */    if( startIdx < 0 )
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */    if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */ 
/* Generated */    #if !defined(_JAVA)
/* Generated */    /* Verify required price component. */
/* Generated */    if(!inHigh||!inLow||!inClose)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    /* min/max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 14;
/* Generated */    else if( ((int)optInTimePeriod < 2) || ((int)optInTimePeriod > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outReal )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

   /* Insert TA function code here. */

   /* Original implementation from Wilder's book was doing some integer
    * rounding in its calculations.
    *
    * This was understandable in the context that at the time the book
    * was written, most user were doing the calculation by hand.
    * 
    * For a computer, rounding is unnecessary (and even problematic when inputs
    * are close to 1).
    *
    * TA-Lib does not do the rounding. Still, if you want to reproduce Wilder's examples,
    * you can comment out the following #undef/#define and rebuild the library.
    */
   #undef  round_pos
   #define round_pos(x) (x)

   /* Move up the start index if there is not
    * enough initial data.
    * Always one price bar gets consumed.
    */
   adxrLookback = LOOKBACK_CALL(ADXR)( optInTimePeriod );

   if( startIdx < adxrLookback )
      startIdx = adxrLookback;

   /* Make sure there is still something to evaluate. */
   if( startIdx > endIdx )
   {
      VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
      VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
      return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
   }

   ARRAY_ALLOC( adx, endIdx-startIdx+optInTimePeriod );
   #if !defined( _JAVA )
      if( !adx )
         return ENUM_VALUE(RetCode,TA_ALLOC_ERR,AllocErr);
   #endif

   retCode = FUNCTION_CALL(ADX)( startIdx-(optInTimePeriod-1), endIdx,
                                 inHigh, inLow, inClose,
                                 optInTimePeriod, outBegIdx, outNBElement, adx );

   if( retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success) )      
   {
      ARRAY_FREE( adx );
      return retCode;
   }

   i = optInTimePeriod-1;
   j = 0;
   outIdx = 0;
   nbElement = endIdx-startIdx+2;
   while( --nbElement != 0 )
      outReal[outIdx++] = round_pos( (adx[i++]+adx[j++])/2.0 );

   ARRAY_FREE( adx );

   VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;
   VALUE_HANDLE_DEREF(outNBElement) = outIdx;

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::AdxrStateInit( struct TA_Adxr_State** _state,
/* Generated */                        int           optInTimePeriod )  /* From 2 to 100000 */
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int adxrStateInit( struct TA_adxr_State** _state,
/* Generated */                         int           optInTimePeriod )  /* From 2 to 100000 */
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_ADXR_StateInit( struct TA_ADXR_State** _state,
/* Generated */                                            int           optInTimePeriod )  /* From 2 to 100000 */
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/

{
   /* insert local variable here */
#define TA_ADXR_SUPPRESS_MEMORY_ALLOCATION
/**** START GENCODE SECTION 6 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    /* min/max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 14;
/* Generated */    else if( ((int)optInTimePeriod < 2) || ((int)optInTimePeriod > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    STATE = TA_Calloc(1, sizeof(struct TA_ADXR_State));
/* Generated */    STATE_P.mem_index = 0;
/* Generated */    STATE_P.optInTimePeriod = optInTimePeriod;
/* Generated */    MEM_SIZE_P = TA_ADXR_Lookback(optInTimePeriod );
/* Generated */    #ifndef TA_ADXR_SUPPRESS_MEMORY_ALLOCATION
/* Generated */    if (MEM_SIZE_P > 0)
/* Generated */          MEM_P = TA_Calloc(MEM_SIZE_P, sizeof(struct TA_ADXR_Data));
/* Generated */    else
/* Generated */    #endif
/* Generated */          MEM_P = NULL;/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 6 - DO NOT DELETE THIS LINE ****/

   /* insert state init code here. */
   if( optInTimePeriod > 1 )
      MEM_SIZE_P = optInTimePeriod-1;
   else
      MEM_SIZE_P = 3;

   // TODO only one double is needed for memory
   MEM_P = TA_Calloc(MEM_SIZE_P, sizeof(struct TA_ADXR_Data));

   return FUNCTION_CALL_STATE_INIT(ADX)((struct TA_ADX_State**)&STATE_P.ADXState, STATE_P.optInTimePeriod);
}

/**** START GENCODE SECTION 7 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::AdxrState( struct TA_Adxr_State* _state,
/* Generated */                    cli::array<double>^ inHigh,
/* Generated */                    cli::array<double>^ inLow,
/* Generated */                    cli::array<double>^ inClose,
/* Generated */                    cli::array<double>^  *outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int adxrState( struct TA_adxr_State* _state,
/* Generated */                     double       inHigh,
/* Generated */                     double       inLow,
/* Generated */                     double       inClose,
/* Generated */                     double        *outReal )
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_ADXR_State( struct TA_ADXR_State* _state,
/* Generated */                                        const double inHigh,
/* Generated */                                        const double inLow,
/* Generated */                                        const double inClose,
/* Generated */                                        double        *outReal )
/* Generated */ #endif
/**** END GENCODE SECTION 7 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */
 #define TA_ADXR_SUPPRESS_EXIT_ON_NOT_ENOUGH_DATA
ENUM_DECLARATION(RetCode) retCode;
double tempReal;
/**** START GENCODE SECTION 8 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    #if !defined(_JAVA)
/* Generated */    /* Verify required price component. */
/* Generated */    if(!inHigh||!inLow||!inClose)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    size_t _cur_idx = STATE.mem_index++;
/* Generated */    if (MEM_SIZE > 0) _cur_idx %= MEM_SIZE;
/* Generated */    UNUSED_VARIABLE(_cur_idx); // in case PUSH\POP methods won't be used
/* Generated */    #ifndef TA_ADXR_SUPPRESS_EXIT_ON_NOT_ENOUGH_DATA
/* Generated */    if (NEED_MORE_DATA) {
/* Generated */          PUSH_TO_MEM(inHigh,inHigh);
/* Generated */          PUSH_TO_MEM(inLow,inLow);
/* Generated */          PUSH_TO_MEM(inClose,inClose);
/* Generated */    return ENUM_VALUE(RetCode,TA_NEED_MORE_DATA,NeedMoreData); }
/* Generated */    #endif
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outReal )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 8 - DO NOT DELETE THIS LINE ****/

   /* insert state based TA dunc code here. */
   retCode = FUNCTION_CALL_STATE(ADX)((struct TA_ADX_State*)STATE.ADXState, inHigh, inLow, inClose, &tempReal);
   if (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success))
   {
       if (retCode == ENUM_VALUE(RetCode,TA_NEED_MORE_DATA,NeedMoreData))
       {
           STATE.mem_index--;
       }
       return retCode;
   }

   if (!(NEED_MORE_DATA))
   {
   VALUE_HANDLE_DEREF(outReal) = round_pos((POP_FROM_MEM(inClose)+tempReal)/2.0);
   PUSH_TO_MEM(inClose, tempReal);
   } else {
       PUSH_TO_MEM(inClose, tempReal);
       return ENUM_VALUE(RetCode,TA_NEED_MORE_DATA,NeedMoreData);
   }

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 9 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::AdxrStateFree( struct TA_Adxr_State** _state )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int adxrStateFree( struct TA_adxr_State** _state )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_ADXR_StateFree( struct TA_ADXR_State** _state )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 9 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */
ENUM_DECLARATION(RetCode) retCode;
retCode = FUNCTION_CALL_STATE_FREE(ADX)((struct TA_ADX_State**)&STATE_P.ADXState);
if (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success)) return retCode;

/**** START GENCODE SECTION 10 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    if (STATE != NULL) {
/* Generated */          if (MEM_P != NULL) TA_Free(MEM_P);
/* Generated */          TA_Free(STATE); STATE = NULL;}
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 10 - DO NOT DELETE THIS LINE ****/

   /* insert state free code here. */   
   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 11 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::AdxrStateSave( struct TA_Adxr_State* _state,
/* Generated */                        FILE* _file )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int adxrStateSave( struct TA_adxr_State* _state,
/* Generated */                         FILE* _file )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_ADXR_StateSave( struct TA_ADXR_State* _state,
/* Generated */                                            FILE* _file )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 11 - DO NOT DELETE THIS LINE ****/

{
   /* insert local variable here */
TA_RetCode retCode;
/**** START GENCODE SECTION 12 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */     int io_res; int state_is_null; state_is_null = (_state == NULL);
/* Generated */    io_res = fwrite(&state_is_null,sizeof(state_is_null),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    if (state_is_null) return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    io_res = fwrite(&STATE.mem_index,sizeof(STATE.mem_index),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    io_res = fwrite(&STATE.mem_size,sizeof(STATE.mem_size),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    int memory_allocated;
/* Generated */    memory_allocated = STATE.memory != NULL;
/* Generated */    io_res = fwrite(&memory_allocated,sizeof(memory_allocated),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    if (memory_allocated && STATE.mem_size > 0) { io_res = fwrite(STATE.memory,sizeof(struct TA_ADXR_Data),STATE.mem_size,_file);
/* Generated */    if (io_res < (int) STATE.mem_size) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed); }
/* Generated */    io_res = fwrite(&STATE.optInTimePeriod,sizeof(STATE.optInTimePeriod),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    // Warning: STATE.ADXState must be saved manually!
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 12 - DO NOT DELETE THIS LINE ****/

   /* insert state save code here. */
        retCode = FUNCTION_CALL_STATE_SAVE(ADX)( (struct TA_ADX_State*) STATE.ADXState, _file );
        if (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success)) return retCode;
   return 0;
}

/**** START GENCODE SECTION 13 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::AdxrStateLoad( struct TA_Adxr_State** _state,
/* Generated */                        FILE* _file )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int adxrStateLoad( struct TA_adxr_State** _state,
/* Generated */                         FILE* _file )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_ADXR_StateLoad( struct TA_ADXR_State** _state,
/* Generated */                                            FILE* _file )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 13 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */
TA_RetCode retCode;
/**** START GENCODE SECTION 14 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    int io_res; int state_is_null;
/* Generated */    io_res = fread(&state_is_null,sizeof(state_is_null),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    if (state_is_null) return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    if (STATE != NULL) return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    STATE = TA_Calloc(1, sizeof(struct TA_ADXR_State));
/* Generated */    io_res = fread(&STATE_P.mem_index,sizeof(STATE_P.mem_index),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    io_res = fread(&STATE_P.mem_size,sizeof(STATE_P.mem_size),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    int memory_allocated;
/* Generated */    io_res = fread(&memory_allocated,sizeof(memory_allocated),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    if (STATE_P.mem_size > 0 && memory_allocated) { STATE_P.memory = TA_Calloc(STATE_P.mem_size, sizeof(struct TA_ADXR_Data));
/* Generated */    io_res = fread(STATE_P.memory,sizeof(struct TA_ADXR_Data),STATE_P.mem_size,_file);
/* Generated */    if (io_res < (int) STATE_P.mem_size) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed); } 
/* Generated */    io_res = fread(&STATE_P.optInTimePeriod,sizeof(STATE_P.optInTimePeriod),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    // Warning: STATE_P.ADXState must be loaded manually!
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 14 - DO NOT DELETE THIS LINE ****/

   /* insert state load code here. */
        retCode = FUNCTION_CALL_STATE_LOAD(ADX)( (struct TA_ADX_State**) &STATE_P.ADXState, _file );
        if (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success)) return retCode;
   return 0;
}

/**** START GENCODE SECTION 15 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #define  USE_SINGLE_PRECISION_INPUT
/* Generated */ #undef  TA_LIB_PRO
/* Generated */ #if !defined( _MANAGED ) && !defined( _JAVA )
/* Generated */    #undef   TA_PREFIX
/* Generated */    #define  TA_PREFIX(x) TA_S_##x
/* Generated */ #endif
/* Generated */ #undef   INPUT_TYPE
/* Generated */ #define  INPUT_TYPE float
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::Adxr( int    startIdx,
/* Generated */                                      int    endIdx,
/* Generated */                                      SubArray<float>^ inHigh,
/* Generated */                                      SubArray<float>^ inLow,
/* Generated */                                      SubArray<float>^ inClose,
/* Generated */                                      int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                                      [Out]int%    outBegIdx,
/* Generated */                                      [Out]int%    outNBElement,
/* Generated */                                      SubArray<double>^  outReal )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Adxr( int    startIdx,
/* Generated */                                      int    endIdx,
/* Generated */                                      cli::array<float>^ inHigh,
/* Generated */                                      cli::array<float>^ inLow,
/* Generated */                                      cli::array<float>^ inClose,
/* Generated */                                      int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                                      [Out]int%    outBegIdx,
/* Generated */                                      [Out]int%    outNBElement,
/* Generated */                                      cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode adxr( int    startIdx,
/* Generated */                      int    endIdx,
/* Generated */                      float        inHigh[],
/* Generated */                      float        inLow[],
/* Generated */                      float        inClose[],
/* Generated */                      int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                      MInteger     outBegIdx,
/* Generated */                      MInteger     outNBElement,
/* Generated */                      double        outReal[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_ADXR( int    startIdx,
/* Generated */                       int    endIdx,
/* Generated */                       const float  inHigh[],
/* Generated */                       const float  inLow[],
/* Generated */                       const float  inClose[],
/* Generated */                       int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                       int          *outBegIdx,
/* Generated */                       int          *outNBElement,
/* Generated */                       double        outReal[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */    ARRAY_REF( adx );
/* Generated */    int adxrLookback, i, j, outIdx, nbElement;
/* Generated */    ENUM_DECLARATION(RetCode) retCode;
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */     if( startIdx < 0 )
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if(!inHigh||!inLow||!inClose)
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */     if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */        optInTimePeriod = 14;
/* Generated */     else if( ((int)optInTimePeriod < 2) || ((int)optInTimePeriod > 100000) )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !outReal )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */  #endif 
/* Generated */    #undef  round_pos
/* Generated */    #define round_pos(x) (x)
/* Generated */    adxrLookback = LOOKBACK_CALL(ADXR)( optInTimePeriod );
/* Generated */    if( startIdx < adxrLookback )
/* Generated */       startIdx = adxrLookback;
/* Generated */    if( startIdx > endIdx )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    }
/* Generated */    ARRAY_ALLOC( adx, endIdx-startIdx+optInTimePeriod );
/* Generated */    #if !defined( _JAVA )
/* Generated */       if( !adx )
/* Generated */          return ENUM_VALUE(RetCode,TA_ALLOC_ERR,AllocErr);
/* Generated */    #endif
/* Generated */    retCode = FUNCTION_CALL(ADX)( startIdx-(optInTimePeriod-1), endIdx,
/* Generated */                                  inHigh, inLow, inClose,
/* Generated */                                  optInTimePeriod, outBegIdx, outNBElement, adx );
/* Generated */    if( retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success) )      
/* Generated */    {
/* Generated */       ARRAY_FREE( adx );
/* Generated */       return retCode;
/* Generated */    }
/* Generated */    i = optInTimePeriod-1;
/* Generated */    j = 0;
/* Generated */    outIdx = 0;
/* Generated */    nbElement = endIdx-startIdx+2;
/* Generated */    while( --nbElement != 0 )
/* Generated */       outReal[outIdx++] = round_pos( (adx[i++]+adx[j++])/2.0 );
/* Generated */    ARRAY_FREE( adx );
/* Generated */    VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;
/* Generated */    VALUE_HANDLE_DEREF(outNBElement) = outIdx;
/* Generated */    return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */ }
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ }}} // Close namespace TicTacTec.TA.Lib
/* Generated */ #endif
/**** END GENCODE SECTION 15 - DO NOT DELETE THIS LINE ****/

